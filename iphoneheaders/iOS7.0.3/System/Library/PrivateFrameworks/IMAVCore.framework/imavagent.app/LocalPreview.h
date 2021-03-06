/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/imavagent.app/imavagent
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <imavagent/imavagent-Structs.h>
#import <imavagent/AVConferencePreviewClientDelegate.h>

@class NSMutableArray, NSDate, NSArray;

@interface LocalPreview : NSObject <AVConferencePreviewClientDelegate> {

	NSMutableArray* _listenersRunningPreview;
	NSDate* _initialStartPreviewRequest;
	vproc_transaction_sRef _previewTransaction;

}

@property (nonatomic,readonly) NSArray * listenersRunningPreview;              //@synthesize listenersRunningPreview=_listenersRunningPreview - In the implementation block
-(id)listenersRunningPreview;
-(void)__reallyStopPreview;
-(void)__updatePreviewState;
-(void)startPreviewWithListenerID:(id)arg1 ;
-(void)stopPreviewWithListenerID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)didReceiveCommError;
@end

