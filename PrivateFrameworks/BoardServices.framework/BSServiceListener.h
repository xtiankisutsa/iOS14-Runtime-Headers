/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BSServiceListener <NSObject>
@property (nonatomic,copy,readonly) NSString * service; 
@property (nonatomic,copy,readonly) NSString * instance; 
@required
-(NSString *)instance;
-(void)didReceiveConnection:(id)arg1;
-(NSString *)service;

@end

