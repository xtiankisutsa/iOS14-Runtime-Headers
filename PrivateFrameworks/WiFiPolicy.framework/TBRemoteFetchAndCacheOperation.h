/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol TBFetchResponse, TBFetchRequest;
@class NSDate, TBRemoteFetchAndCacheDataSource;

@interface TBRemoteFetchAndCacheOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	id<TBFetchResponse> _response;
	id<TBFetchRequest> _fetchRequest;
	TBRemoteFetchAndCacheDataSource* _dataSource;

}

@property (nonatomic,retain) id<TBFetchRequest> fetchRequest;                           //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<TBFetchResponse> response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) TBRemoteFetchAndCacheDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(BOOL)isFinished;
-(void)setResponse:(id<TBFetchResponse>)arg1 ;
-(void)setDataSource:(TBRemoteFetchAndCacheDataSource *)arg1 ;
-(BOOL)isReady;
-(void)setFetchRequest:(id<TBFetchRequest>)arg1 ;
-(id<TBFetchRequest>)fetchRequest;
-(void)finish;
-(void)start;
-(TBRemoteFetchAndCacheDataSource *)dataSource;
-(id<TBFetchResponse>)response;
-(id)name;
-(id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 ;
@end

