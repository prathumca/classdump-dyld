/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject {

	NSMutableArray* _outputQueue;

}

@property (nonatomic,retain) NSMutableArray * outputQueue;              //@synthesize outputQueue=_outputQueue - In the implementation block
+(id)sharedOutputManager;
-(id)outputQueue;
-(void)setOutputQueue:(id)arg1 ;
-(void)queueOutput:(id)arg1 ;
-(void)clearOutputQueue;
-(void)_handleAccessibilityAnnouncementDidFinish:(id)arg1 ;
-(unsigned)outputQueueCount;
-(void)dealloc;
-(id)init;
@end
