/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSPhishingURLClassifier.h>

@protocol OS_dispatch_queue;
@class WBSHistory, NSObject;

@interface WBSPhishingURLClassifierHistoryAdapter : NSObject <WBSPhishingURLClassifier> {

	WBSHistory* _history;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithHistory:(id)arg1 ;
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
