/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLSessionDataTask, NSMutableData, NSError;

@interface AKURLDataTask : NSObject {

	BOOL _canceledOrCompleted;
	NSURLRequest* _request;
	unsigned long long _retryCount;
	NSURLSessionDataTask* _underlyingTask;
	/*^block*/id _completionHandler;
	NSMutableData* _receivedData;
	NSError* _lastRetryError;

}

@property (nonatomic,retain) NSURLRequest * request;                             //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                      //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * underlyingTask;              //@synthesize underlyingTask=_underlyingTask - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                       //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSError * lastRetryError;                           //@synthesize lastRetryError=_lastRetryError - In the implementation block
@property (assign,nonatomic) BOOL canceledOrCompleted;                           //@synthesize canceledOrCompleted=_canceledOrCompleted - In the implementation block
-(void)setRetryCount:(unsigned long long)arg1 ;
-(NSMutableData *)receivedData;
-(void)_completeWithError:(id)arg1 ;
-(unsigned long long)retryCount;
-(NSURLSessionDataTask *)underlyingTask;
-(BOOL)canceledOrCompleted;
-(void)setUnderlyingTask:(NSURLSessionDataTask *)arg1 ;
-(void)setLastRetryError:(NSError *)arg1 ;
-(NSURLRequest *)request;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setCanceledOrCompleted:(BOOL)arg1 ;
-(id)description;
-(NSError *)lastRetryError;
-(id)completionHandler;
@end

