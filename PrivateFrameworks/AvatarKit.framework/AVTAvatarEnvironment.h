/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNScene, AVTAvatar, SCNNode, SCNMaterial;

@interface AVTAvatarEnvironment : NSObject {

	SCNScene* _scene;
	AVTAvatar* _avatar;
	SCNNode* _trackingLostIndicator;
	BOOL _trackingLostIndicatorVisible;
	SCNMaterial* _shadowPlaneMaterial;
	SCNNode* _whitePlane;
	SCNNode* _environmentNode;
	SCNNode* _defaultPointOfView;
	SCNNode* _specializedLightingNode;
	SCNNode* _defaultLightingNode;

}

@property (nonatomic,readonly) SCNNode * environmentNode; 
@property (nonatomic,readonly) SCNNode * defaultPointOfView; 
@property (assign,nonatomic) BOOL showReticle; 
@property (assign,nonatomic) float fadeFactor; 
@property (nonatomic,readonly) BOOL faceIsFullyVisible; 
-(void)didSnapshot;
-(void)willSnapshot;
-(id)initAndInstallInScene:(id)arg1 ;
-(void)setShowReticle:(BOOL)arg1 ;
-(void)avatarDidChange:(id)arg1 arMode:(BOOL)arg2 ;
-(SCNNode *)defaultPointOfView;
-(id)defaultEnvironmentNode;
-(void)updateSpecializedLighting;
-(void)updateARMode:(BOOL)arg1 ;
-(void)showTrackingLossIndicator;
-(void)hideTrackingLossIndicator;
-(SCNNode *)environmentNode;
-(BOOL)showReticle;
-(void)hideReticle;
-(void)setFadeFactor:(float)arg1 ;
-(float)fadeFactor;
-(BOOL)faceIsFullyVisible;
@end

