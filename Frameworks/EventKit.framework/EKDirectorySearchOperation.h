/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, EKDirectorySearchQuery, NSError;

@interface EKDirectorySearchOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	NSString* _accountID;
	EKDirectorySearchQuery* _query;
	/*^block*/id _resultsBlock;
	id _searchID;
	BOOL _numberOfMatchesExceededLimit;
	NSError* _error;

}

@property (assign,nonatomic) BOOL numberOfMatchesExceededLimit;              //@synthesize numberOfMatchesExceededLimit=_numberOfMatchesExceededLimit - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
+(BOOL)isSupported;
-(void)cancel;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)_recordTypes;
-(void)_processResults:(id)arg1 ;
-(void)setNumberOfMatchesExceededLimit:(BOOL)arg1 ;
-(id)_processGroupsInResults:(id)arg1 ;
-(id)_processLocationsInResults:(id)arg1 ;
-(id)_processResourcesInResults:(id)arg1 ;
-(id)_processPeopleInResults:(id)arg1 ;
-(id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(/*^block*/id)arg3 ;
-(BOOL)numberOfMatchesExceededLimit;
-(void)_finishWithError:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(id)init;
-(BOOL)isConcurrent;
-(void)main;
@end
