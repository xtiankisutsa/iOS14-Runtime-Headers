/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIFactor : TRIPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (assign,nonatomic) BOOL hasId_p; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int namespaceId; 
@property (assign,nonatomic) BOOL hasNamespaceId; 
@property (nonatomic,copy) NSString * namespaceName; 
@property (assign,nonatomic) BOOL hasNamespaceName; 
+(id)descriptor;
-(id)typeString;
-(BOOL)isInNamespaceName:(id)arg1 ;
-(id)namespaceString;
-(BOOL)hasNamespace;
@end
