/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUICFlameGroup : NSObject {

	BOOL _isAura;
	BOOL _isDyingOff;
	float _stateTime;
	float _zTime;
	float _globalAlpha;
	float _transitionPhase;
	float* _transitionPhasePtr;
	* _stateModifiersPtr;
	 _stateModifiers;

}

@property (assign,nonatomic) float stateTime;                        //@synthesize stateTime=_stateTime - In the implementation block
@property (assign,nonatomic) float zTime;                            //@synthesize zTime=_zTime - In the implementation block
@property (assign,nonatomic) float globalAlpha;                      //@synthesize globalAlpha=_globalAlpha - In the implementation block
@property (assign,nonatomic) float transitionPhase;                  //@synthesize transitionPhase=_transitionPhase - In the implementation block
@property (assign,nonatomic) float* transitionPhasePtr;              //@synthesize transitionPhasePtr=_transitionPhasePtr - In the implementation block
@property (assign,nonatomic)  stateModifiers;                        //@synthesize stateModifiers=_stateModifiers - In the implementation block
@property (assign,nonatomic) * stateModifiersPtr;                    //@synthesize stateModifiersPtr=_stateModifiersPtr - In the implementation block
@property (assign,nonatomic) BOOL isAura;                            //@synthesize isAura=_isAura - In the implementation block
@property (assign,nonatomic) BOOL isDyingOff;                        //@synthesize isDyingOff=_isDyingOff - In the implementation block
-(void)setGlobalAlpha:(float)arg1 ;
-(void)setZTime:(float)arg1 ;
-(void)setTransitionPhasePtr:(float*)arg1 ;
-(float)stateTime;
-(void)setIsDyingOff:(BOOL)arg1 ;
-(float*)transitionPhasePtr;
-(float)transitionPhase;
-(void)setTransitionPhase:(float)arg1 ;
-(void)setStateModifiers:;
-(BOOL)isDyingOff;
-(void)setStateTime:(float)arg1 ;
-(*)stateModifiersPtr;
-(id)init;
-(float)zTime;
-(void)setStateModifiersPtr:(*)arg1 ;
-(float)globalAlpha;
-(void)setIsAura:(BOOL)arg1 ;
-()stateModifiers;
-(BOOL)isAura;
-(id)description;
@end

