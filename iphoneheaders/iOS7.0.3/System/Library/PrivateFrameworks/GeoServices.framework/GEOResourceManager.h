/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GEOResourceManager : NSObject
+(id)sharedManager;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)allResourceNames;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/ id)arg3 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/ id)arg3 ;
@end
