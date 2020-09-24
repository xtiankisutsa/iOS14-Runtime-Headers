/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PKMapContainer : NSObject <NSSecureCoding> {

	NSMutableDictionary* _recipientMap;
	NSMutableDictionary* _scoreMap;
	long long _version;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * recipientMap;              //@synthesize recipientMap=_recipientMap - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * scoreMap;                  //@synthesize scoreMap=_scoreMap - In the implementation block
@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)version;
-(void)removeAllObjects;
-(id)init;
-(NSMutableDictionary *)scoreMap;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)recipientMap;
-(void)updateWithContainer:(id)arg1 ;
@end
