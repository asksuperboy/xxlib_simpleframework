﻿using System;
namespace DB
{
    /// <summary>
    /// 对应 account 账号表
    /// </summary>
    public partial class Account
    {
        /// <summary>
        /// 自增主键
        /// </summary>
        public long id;
        /// <summary>
        /// 用户名( 有索引 )
        /// </summary>
        public string username;
        /// <summary>
        /// 密码( 无索引 )
        /// </summary>
        public string password;
    }
}