/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString, WFAlert, WFPBAlert;

@interface WFRemoteExecutionAlertRequest : WFRemoteExecutionRequest {

	NSString* _associatedRunRequestIdentifier;
	WFAlert* _alert;
	WFPBAlert* _pbAlert;

}

@property (nonatomic,retain) WFPBAlert * pbAlert;                                      //@synthesize pbAlert=_pbAlert - In the implementation block
@property (nonatomic,readonly) NSString * associatedRunRequestIdentifier;              //@synthesize associatedRunRequestIdentifier=_associatedRunRequestIdentifier - In the implementation block
@property (nonatomic,readonly) WFAlert * alert;                                        //@synthesize alert=_alert - In the implementation block
+(long long)version;
-(WFAlert *)alert;
-(WFPBAlert *)pbAlert;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(NSString *)associatedRunRequestIdentifier;
-(id)initWithAlert:(id)arg1 associatedRunRequestIdentifier:(id)arg2 ;
-(void)inflateAlertWithBlock:(/*^block*/id)arg1 ;
-(void)setPbAlert:(WFPBAlert *)arg1 ;
@end

