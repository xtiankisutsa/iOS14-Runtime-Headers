/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPLinkMetadataStatusTransformerDelegate;
@class LPLinkMetadata, NSURL, NSAttributedString;

@interface LPLinkMetadataStatusTransformer : NSObject {

	LPLinkMetadata* _metadata;
	NSURL* _URL;
	BOOL _wantsStatusItem;
	id<LPLinkMetadataStatusTransformerDelegate> _delegate;

}

@property (nonatomic,retain) LPLinkMetadata * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<LPLinkMetadataStatusTransformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL wantsStatusItem;                                                   //@synthesize wantsStatusItem=_wantsStatusItem - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * statusText; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * canonicalURL; 
-(id)originalURL;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)dealloc;
-(NSAttributedString *)statusText;
-(id)initWithMetadata:(id)arg1 URL:(id)arg2 ;
-(NSURL *)canonicalURL;
-(BOOL)wantsStatusItem;
-(void)setDelegate:(id<LPLinkMetadataStatusTransformerDelegate>)arg1 ;
-(id<LPLinkMetadataStatusTransformerDelegate>)delegate;
-(NSURL *)actionURL;
@end
