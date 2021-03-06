/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NSString, NSMutableDictionary;

@interface NWAccumulation : NSObject {

	os_unfair_lock_s _lock;
	BOOL _isSnapshot;
	NSString* _name;
	NSMutableDictionary* _durations;
	NSString* _currentState;
	double _lastUpdateTime;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * durations;              //@synthesize durations=_durations - In the implementation block
@property (nonatomic,retain) NSString * currentState;                      //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                        //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) BOOL isSnapshot;                              //@synthesize isSnapshot=_isSnapshot - In the implementation block
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
-(double)lastUpdateTime;
-(void)setLastUpdateTime:(double)arg1 ;
-(NSMutableDictionary *)durations;
-(id)initWithName:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)setIsSnapshot:(BOOL)arg1 ;
-(id)snapshot;
-(BOOL)isSnapshot;
-(void)updateWithState:(id)arg1 atTime:(double)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDurations:(NSMutableDictionary *)arg1 ;
-(NSString *)name;
-(id)description;
@end

