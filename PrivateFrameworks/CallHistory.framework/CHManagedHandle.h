/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class CHHandle, NSString, NSSet;

@interface CHManagedHandle : NSManagedObject

@property (nonatomic,readonly) CHHandle * chHandle; 
@property (nonatomic,copy) NSString * normalizedValue; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSSet * localParticipantCalls; 
@property (nonatomic,retain) NSSet * remoteParticipantCalls; 
+(id)fetchRequest;
+(id)managedHandleForHandle:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedHandlesForHandles:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)copyWithContext:(id)arg1 ;
-(CHHandle *)chHandle;
@end

