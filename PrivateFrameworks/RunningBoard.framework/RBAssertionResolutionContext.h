/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;
@class NSMutableSet, RBProcessMap, RBAttributeContext, RBProcessStateChangeSet, RBAssertionCollection, RBProcessIndex, RBSystemState, NSSet;

@interface RBAssertionResolutionContext : NSObject {

	NSMutableSet* _assertions;
	NSMutableSet* _touchedAssertions;
	NSMutableSet* _lostStartTimeDefining;
	NSMutableSet* _gainedStartTimeDefining;
	NSMutableSet* _targetsPendingResolution;
	RBProcessMap* _resolvedState;
	RBProcessMap* _originatorInheritances;
	RBAttributeContext* _attributeContext;
	RBProcessStateChangeSet* _changeSet;
	RBAssertionCollection* _assertionCollection;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBEntitlementManaging> _entitlementManager;
	RBSystemState* _systemState;

}

@property (nonatomic,readonly) RBProcessStateChangeSet * changeSet;              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) RBSystemState * systemState;                      //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,readonly) NSSet * touchedAssertions;                        //@synthesize touchedAssertions=_touchedAssertions - In the implementation block
@property (nonatomic,readonly) NSSet * lostStartTimeDefining;                    //@synthesize lostStartTimeDefining=_lostStartTimeDefining - In the implementation block
@property (nonatomic,readonly) NSSet * gainedStartTimeDefining;                  //@synthesize gainedStartTimeDefining=_gainedStartTimeDefining - In the implementation block
-(RBProcessStateChangeSet *)changeSet;
-(id)_assertionGraphFromAssertion:(id)arg1 ;
-(NSSet *)gainedStartTimeDefining;
-(void)_resolveProcessStateForTarget:(id)arg1 ofType:(unsigned long long)arg2 viaAssertion:(id)arg3 ;
-(id)_inheritancesForOriginator:(id)arg1 ;
-(void)_assertionGraphFromAssertion:(id)arg1 graph:(id)arg2 ;
-(void)_resolveSystemState;
-(void)_suspendOrResumeAssertionsForTarget:(id)arg1 oldState:(id)arg2 newState:(id)arg3 ;
-(id)_originatorInheritancesForAssertion:(id)arg1 ;
-(NSSet *)touchedAssertions;
-(id)_latestStateForIdentity:(id)arg1 ;
-(NSSet *)lostStartTimeDefining;
-(void)_updateStatesForAssertion:(id)arg1 ;
-(RBSystemState *)systemState;
-(void)_finalizeStateChangeSet;
@end
