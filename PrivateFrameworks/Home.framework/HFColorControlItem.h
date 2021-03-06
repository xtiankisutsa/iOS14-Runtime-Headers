/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>

@interface HFColorControlItem : HFControlItem

@property (nonatomic,readonly) BOOL supportsRGBColor; 
@property (nonatomic,readonly) BOOL supportsNaturalLighting; 
@property (assign,nonatomic) BOOL naturalLightingEnabled; 
@property (nonatomic,readonly) id<HFColorProfile> colorProfile; 
+(id)na_identity;
+(Class)valueClass;
+(id)colorCharacteristicTypes;
-(BOOL)supportsRGBColor;
-(id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2 ;
-(id)writeValue:(id)arg1 ;
-(id)normalizedValueForValue:(id)arg1 ;
-(void)_logForNaturalLightUserStudy:(id)arg1 ;
-(BOOL)supportsNaturalLighting;
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(BOOL)supportsItemRepresentingServices:(id)arg1 ;
-(id<HFColorProfile>)colorProfile;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(BOOL)naturalLightingEnabled;
@end

