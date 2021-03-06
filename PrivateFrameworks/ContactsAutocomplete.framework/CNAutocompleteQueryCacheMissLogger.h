/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteQueryCacheMissLogging.h>

@class NSArray, NSString;

@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging> {

	NSArray* _loggers;

}

@property (copy) NSArray * loggers;                                 //@synthesize loggers=_loggers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)loggers;
-(id)initWithLoggers:(id)arg1 ;
-(void)didReturnCacheFalseNegatives:(id)arg1 ;
-(void)didReturnCacheFalsePositives:(id)arg1 ;
-(void)setLoggers:(NSArray *)arg1 ;
@end

