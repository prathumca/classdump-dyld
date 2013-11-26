/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@interface PLSpringBoardLogger : PLLogger {

	int blankStateToken;
	int lockStateToken;
	int lastBlankState;
	int lastLockState;

}
-(void)dealloc;
-(id)init;
-(void)log;
-(void)logWallPaperChange;
-(void)_noteScreenTimeChanged:(id)arg1 ;
-(void)logSpringboardNotifications;
@end
