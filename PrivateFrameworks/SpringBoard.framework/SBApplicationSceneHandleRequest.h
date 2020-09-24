/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBApplication, FBScene, FBSDisplayIdentity, FBSSceneDefinition;

@interface SBApplicationSceneHandleRequest : NSObject {

	SBApplication* _application;
	FBScene* _existingScene;
	FBSDisplayIdentity* _displayIdentity;
	FBSSceneDefinition* _sceneDefinition;

}

@property (nonatomic,retain) SBApplication * application;                       //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) FBScene * existingScene;                           //@synthesize existingScene=_existingScene - In the implementation block
@property (nonatomic,retain) FBSDisplayIdentity * displayIdentity;              //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (nonatomic,copy) FBSSceneDefinition * sceneDefinition;                //@synthesize sceneDefinition=_sceneDefinition - In the implementation block
+(id)defaultRequestForApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3 ;
-(void)setApplication:(SBApplication *)arg1 ;
-(SBApplication *)application;
-(FBSDisplayIdentity *)displayIdentity;
-(void)setDisplayIdentity:(FBSDisplayIdentity *)arg1 ;
-(id)initWithApplication:(id)arg1 sceneDefinition:(id)arg2 displayIdentity:(id)arg3 ;
-(void)setExistingScene:(FBScene *)arg1 ;
-(void)setSceneDefinition:(FBSSceneDefinition *)arg1 ;
-(FBScene *)existingScene;
-(FBSSceneDefinition *)sceneDefinition;
@end
