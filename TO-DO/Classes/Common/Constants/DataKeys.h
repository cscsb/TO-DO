//
//  DataKeys.h
//  TO-DO
//
//  Created by Siegrain on 16/5/9.
//  Copyright © 2016年 com.siegrain. All rights reserved.
//

/**
 *  各类常量关键字等
 */
#ifndef DataKeys_h
#define DataKeys_h

typedef NS_ENUM(NSInteger, TodoStatus) {
    /* 普通 */
    TodoStatusNormal,
    /* 延迟 */
    TodoStatusSnoozed,
    /* 过期 */
    TodoStatusOverdue
};
/**
 *  同步类型
 */
typedef NS_ENUM(NSInteger, SyncType) {
    /**
	 *  增量同步（只同步客户端和服务器不同的部分）
	 */
    SyncTypeIncrementalSync,
    /**
	 *  提交变更（上传客户端中被修改过的数据）
	 */
    SyncTypeSendChanges,
    /**
	 *  全量同步（同步所有数据并对差异数据进行对比）
	 */
    SyncTypeFullSync
};
static NSString const* kSyncTypeDescription[3] = { @"INCREMENTAL", @"SEND CHANGES", @"FULL" };

typedef NS_ENUM(NSInteger, SyncStatus) {
    /* 等待同步 */
    SyncStatusWaiting,
    /* 同步中 */
    SyncStatusSynchronizing,
    /* 同步完成 */
    SyncStatusSynchronized
};

/* 野狗空间地址 */
static NSString* const kWilddogConnectionString = @"https://sgtodo.wilddogio.com/";

/* 七牛空间地址 */
static NSString* const kQiniuDomain = @"http://o6yj5t1zc.bkt.clouddn.com/";
/* 七牛图片样式 */
static NSString* const kQiniuImageStyleMidium = @"midium";
static NSString* const kQiniuImageStyleSmall = @"small";
static NSString* const kQiniuImageStyleThumbnail = @"thumb";

/* LeanCloud */
static NSString* const kLeanCloudAppID = @"vDDTixlKPFwrGS60fnprdslF-gzGzoHsz";
static NSString* const kLeanCloudAppKey = @"dM0JeJT5w3a74pE1yQ9UcMJk";
/* LeanCloud获取服务器时间的API地址 */
static NSString* const kLeanCloudServerDateApiUrl = @"https://api.leancloud.cn/1.1/date";

//用户表
static NSString* const kDATAKEY_USERS = @"users";

#endif