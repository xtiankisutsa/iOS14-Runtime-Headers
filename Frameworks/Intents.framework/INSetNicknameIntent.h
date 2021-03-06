/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetNicknameIntentExport.h>

@class INModifyNickname, NSString;

@interface INSetNicknameIntent : INIntent <INSetNicknameIntentExport>

@property (nonatomic,copy,readonly) INModifyNickname * targetNickname; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(id)_dictionaryRepresentation;
-(void)setTargetNickname:(INModifyNickname *)arg1 ;
-(id)initWithTargetNickname:(id)arg1 ;
-(id)_metadata;
-(void)setVerb:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setDomain:(id)arg1 ;
-(INModifyNickname *)targetNickname;
@end

