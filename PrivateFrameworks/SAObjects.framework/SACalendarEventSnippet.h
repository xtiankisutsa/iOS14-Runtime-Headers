/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSDate, NSString;

@interface SACalendarEventSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,copy) NSDate * snippetEndDate; 
@property (nonatomic,copy) NSDate * snippetStartDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)eventSnippet;
+(id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)events;
-(NSString *)timeZoneId;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setEvents:(NSArray *)arg1 ;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSDate *)snippetEndDate;
-(void)setSnippetEndDate:(NSDate *)arg1 ;
-(NSDate *)snippetStartDate;
-(void)setSnippetStartDate:(NSDate *)arg1 ;
@end

