/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MPUNowPlayingDelegate <NSObject>
@optional
-(void)nowPlayingControllerDidBeginListeningForNotifications:(id)arg1;
-(void)nowPlayingControllerDidStopListeningForNotifications:(id)arg1;
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
-(void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
@end
