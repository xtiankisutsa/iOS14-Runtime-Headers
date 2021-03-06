/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@class CKComponent;

@interface CKCenterLayoutComponent : CKComponent {

	unsigned long long _centeringOptions;
	unsigned long long _sizingOptions;
	CKComponent* _child;

}
+(id)newWithCenteringOptions:(unsigned long long)arg1 sizingOptions:(unsigned long long)arg2 child:(id)arg3 size:(const CKComponentSize*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

