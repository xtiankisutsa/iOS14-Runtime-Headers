/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFSlotIdentifier : NSObject <NSCopying> {

	NSString* _key;
	NSString* _parameterKey;
	long long _arrayIndex;

}

@property (nonatomic,readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * parameterKey;              //@synthesize parameterKey=_parameterKey - In the implementation block
@property (nonatomic,readonly) long long arrayIndex;                 //@synthesize arrayIndex=_arrayIndex - In the implementation block
-(long long)arrayIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(NSString *)parameterKey;
-(id)identifierBySettingParameterKey:(id)arg1 arrayIndex:(long long)arg2 ;
-(id)identifierBySettingParameterKey:(id)arg1 ;
-(id)identifierBySettingArrayIndex:(long long)arg1 ;
-(id)initWithKey:(id)arg1 parameterKey:(id)arg2 arrayIndex:(long long)arg3 ;
@end

