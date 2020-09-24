/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel {

	ICTableVersionedDocument* _tableDocument;

}

@property (nonatomic,retain) ICTableVersionedDocument * tableDocument;              //@synthesize tableDocument=_tableDocument - In the implementation block
@property (nonatomic,readonly) ICTable * table; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(id)tableFromAttributedString:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)htmlString;
-(id)activityItems;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(BOOL)canConvertToHTMLForSharing;
-(void)drawPreviewInRect:(CGRect)arg1 ;
-(CGSize)previewInAvailableSize:(CGSize)arg1 shouldDraw:(BOOL)arg2 ;
-(id)quicklookPreviewItems;
-(ICTable *)table;
-(id)localizedFallbackTitle;
-(void)regenerateTextContentInNote;
-(void)attachmentAwakeFromFetch;
-(void)willMarkAttachmentForDeletion;
-(BOOL)isReadyToPresent;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
-(ICTableVersionedDocument *)tableDocument;
-(void)mergeTablePrimitiveData;
-(id)stringsAtRow:(unsigned long long)arg1 ;
-(void)setTableDocument:(ICTableVersionedDocument *)arg1 ;
-(void)updateAttachmentByMergingWithTableData:(id)arg1 ;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)noteWillAddOrRemovePassword;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(id)searchableTextContentInNote;
-(BOOL)providesTextContentInNote;
-(id)textContentInNote;
@end
