/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSData, LogHead;

@interface MapHead : GPBMessage

@property (assign,nonatomic) unsigned long long logBeginningMs; 
@property (nonatomic,copy) NSData * mapHeadHash; 
@property (assign,nonatomic) int application; 
@property (nonatomic,retain) LogHead * changeLogHead; 
@property (assign,nonatomic) BOOL hasChangeLogHead; 
@property (assign,nonatomic) unsigned long long revision; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) unsigned long long treeId; 
+(id)descriptor;
@end

