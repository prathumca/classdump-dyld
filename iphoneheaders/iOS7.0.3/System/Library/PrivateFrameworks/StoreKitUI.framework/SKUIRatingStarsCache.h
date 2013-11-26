/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, UIImage;

@interface SKUIRatingStarsCache : NSObject {

	NSMutableDictionary* _cachedImages;
	UIImage* _emptyStarImage;
	UIImage* _filledStarImage;
	UIImage* _halfStarImage;

}
+(id)cacheWithProperties:(int)arg1 ;
-(id)initWithProperties:(int)arg1 ;
-(id)ratingStarsImageForRating:(float)arg1 ;
-(void).cxx_destruct;
@end
