/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSObservation : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)remove;
-(id)initWithObservable:(id)arg1 blockSink:(/*^block*/id)arg2 tag:(int)arg3 ;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 ;
-(id*)_observerStorage;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
@end

