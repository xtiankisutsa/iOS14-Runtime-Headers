/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class PKDrawing;

@interface PKReplicaEntry : NSObject <NSCoding> {

	unsigned _replicaUUIDIndex;
	unsigned _clock;
	unsigned _subclock;
	BOOL _inUse;
	PKDrawing* _drawing;

}

@property (assign,nonatomic) unsigned replicaUUIDIndex;              //@synthesize replicaUUIDIndex=_replicaUUIDIndex - In the implementation block
@property (assign,nonatomic) unsigned clock;                         //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned subclock;                      //@synthesize subclock=_subclock - In the implementation block
@property (assign,nonatomic) BOOL inUse;                             //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) PKDrawing * drawing;                    //@synthesize drawing=_drawing - In the implementation block
-(unsigned)clock;
-(BOOL)inUse;
-(unsigned)subclock;
-(void)setSubclock:(unsigned)arg1 ;
-(unsigned)replicaUUIDIndex;
-(void)setReplicaUUIDIndex:(unsigned)arg1 ;
-(void)setClock:(unsigned)arg1 ;
-(PKDrawing *)drawing;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(id)description;
-(id)initWithReplicaUUIDIndex:(unsigned)arg1 clock:(unsigned)arg2 subclock:(unsigned)arg3 inUse:(BOOL)arg4 forDrawing:(id)arg5 ;
@end
