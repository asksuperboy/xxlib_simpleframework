struct Scene : MP
{
	// 帧控制相关
	static const int64_t msPerFrame = 1000 / 20;
	int64_t ticks = 0;

	// 对象容器区
	xx::List_v<MonsterBase*> monsters;

	// 更新机制区
	int Update();				// call by Run
	int Run();

	// misc
	Scene();
	~Scene();

	/****************************************************************/
	// lua 附加区
	/****************************************************************/

	void LoadLuaFile(char const* fn);
	lua_State* L = nullptr;
	lua_State* co = nullptr;		// SceneManager 自己的脚本( 执行优先于 objs 之 Updates )
	xx::String_v err;

	// 以类名来创建怪类实例
	xx::MPtr<MonsterBase> CreateMonster(char const* classname);
};
