/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ASFolderHierarchyUpdateConsumer <NSObject>
@required
-(void)folderHierarchySuccessfullyUpdated:(void*)arg1 withNumChangedFolders:(unsigned)arg2;
-(void)folderHierarchyFailedToUpdate:(void*)arg1 withStatus:(int)arg2 andError:(id)arg3;
@end
