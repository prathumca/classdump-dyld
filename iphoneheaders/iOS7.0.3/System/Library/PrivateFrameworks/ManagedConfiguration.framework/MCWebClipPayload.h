/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSURL, NSString, NSData;

@interface MCWebClipPayload : MCPayload {

	NSURL* _URL;
	NSString* _label;
	NSData* _iconData;
	BOOL _isRemovable;
	BOOL _precomposed;
	BOOL _fullScreen;
	NSString* _savedIdentifier;

}

@property (nonatomic,readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSData * iconData;                     //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,readonly) BOOL isRemovable;                      //@synthesize isRemovable=_isRemovable - In the implementation block
@property (nonatomic,readonly) BOOL precomposed;                      //@synthesize precomposed=_precomposed - In the implementation block
@property (nonatomic,readonly) BOOL fullScreen;                       //@synthesize fullScreen=_fullScreen - In the implementation block
@property (nonatomic,retain) NSString * savedIdentifier;              //@synthesize savedIdentifier=_savedIdentifier - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(id)label;
-(id)URL;
-(BOOL)fullScreen;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)savedIdentifier;
-(id)iconData;
-(BOOL)isRemovable;
-(BOOL)precomposed;
-(void)setSavedIdentifier:(id)arg1 ;
-(void).cxx_destruct;
@end
