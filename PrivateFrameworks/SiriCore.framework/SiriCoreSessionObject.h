/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SiriCoreSessionObject <NSObject>
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@required
-(NSString *)aceId;
-(NSString *)refId;
-(void)setAceId:(id)arg1;
-(void)setRefId:(id)arg1;
-(id)siriCore_serializedAceDataError:(id*)arg1;
-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_isRestartable;
-(BOOL)siriCore_isProvisional;
-(void)siriCore_logDiagnostics;
-(id)siriCore_requestId;
-(void)siriCore_setSessionRequestId:(id)arg1;
-(BOOL)siriCore_supportedByLocalSession;

@end

