/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSArray, NSString;

@interface _WKContentRuleListAction : NSObject <WKObject> {

	ObjectStorage<API::ContentRuleListAction> _action;

}

@property (nonatomic,readonly) BOOL blockedLoad; 
@property (nonatomic,readonly) BOOL blockedCookies; 
@property (nonatomic,readonly) BOOL madeHTTPS; 
@property (nonatomic,copy,readonly) NSArray * notifications; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Object*)_apiObject;
-(BOOL)madeHTTPS;
-(void)dealloc;
-(NSArray *)notifications;
-(BOOL)blockedLoad;
-(BOOL)blockedCookies;
@end

