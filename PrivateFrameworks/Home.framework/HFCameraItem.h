/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAccessoryProfileItem.h>
#import <libobjc.A.dylib/HFCompoundItemProtocol.h>

@class NSArray, NSString;

@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol>

@property (nonatomic,readonly) BOOL isCompoundItem; 
@property (nonatomic,readonly) unsigned long long numberOfCompoundItems; 
@property (nonatomic,readonly) id<HFHomeKitObject> primaryHomeKitObject; 
@property (nonatomic,readonly) NSArray * allHomeKitObjects; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getErrorDescription:(out id*)arg1 detailedErrorDescription:(out id*)arg2 forCameraStreamError:(id)arg3 ;
+(BOOL)cameraContainsMotionServiceItem:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)numberOfCompoundItems;
-(BOOL)isCompoundItem;
-(id<HFHomeKitObject>)primaryHomeKitObject;
-(NSString *)description;
@end

