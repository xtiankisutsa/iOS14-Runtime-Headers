/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SOErrorHelper : NSObject
+(id)silentInternalErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 moreInfo:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)invalidURLError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3 ;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 ;
+(id)missingEntitlementError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
+(id)errorNotSupported;
+(id)internalErrorWithMessage:(id)arg1 ;
+(void)raiseExceptionOnError:(id)arg1 ;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 subcode:(long long)arg3 ;
+(id)parameterErrorWithMessage:(id)arg1 ;
+(id)doNotHandleBreakingRecursionWithCallerBundleIdentifier:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 subcode:(long long)arg2 message:(id)arg3 ;
@end

