/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface ProjectImportExportUtils : NSObject
+(unsigned)getTrailingCount:(id)arg1 delim:(id)arg2 range:(NSRange*)arg3 ;
+(id)incrementTrailingCount:(id)arg1 delim:(id)arg2 ;
+(BOOL)doesProjectFileExistForProject:(id)arg1 ;
+(id)makeUniquePath:(id)arg1 delimiter:(id)arg2 ;
+(BOOL)isValidProjectName:(id)arg1 ;
+(id)exportPathForProject:(id)arg1 ;
+(void)reconnectSharedMediaToProject:(id)arg1 usingDatemap:(id)arg2 ;
@end
