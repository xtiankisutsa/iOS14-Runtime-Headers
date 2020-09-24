/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKMemoizingComponent.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFModuleModel, NSString;

@interface WFModuleComponent : CKMemoizingComponent <WFParameterEventObserver, WFActionEventObserver> {

	WFModuleModel* _model;

}

@property (nonatomic,readonly) WFModuleModel * model;               //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 navigationContext:(id)arg2 ;
-(WFModuleModel *)model;
-(void)actionNameDidChange:(id)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(void)reflowComponentSynchronously;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(void)reflowComponentAsynchronously;
@end
