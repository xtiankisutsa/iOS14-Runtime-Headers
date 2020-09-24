/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AVTAvatarPose;

@interface AVTStickerPoseAdjustment : NSObject {

	long long _presetCategory;
	NSString* _presetIdentifier;
	AVTAvatarPose* _pose;

}

@property (assign,nonatomic) long long presetCategory;                 //@synthesize presetCategory=_presetCategory - In the implementation block
@property (nonatomic,retain) NSString * presetIdentifier;              //@synthesize presetIdentifier=_presetIdentifier - In the implementation block
@property (nonatomic,retain) AVTAvatarPose * pose;                     //@synthesize pose=_pose - In the implementation block
-(AVTAvatarPose *)pose;
-(void)setPose:(AVTAvatarPose *)arg1 ;
-(NSString *)presetIdentifier;
-(long long)presetCategory;
-(void)setPresetIdentifier:(NSString *)arg1 ;
-(id)poseByApplyingToPose:(id)arg1 forAvatar:(id)arg2 ;
-(void)setPresetCategory:(long long)arg1 ;
@end
