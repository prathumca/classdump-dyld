/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView {

	CALayer* _innerCircleLayer;
	BOOL _shouldInnerPulse;
	UIImage* _innerImageMask;
	BOOL _rotateInnerImageToMatchCourse;
	CALayer* _baseLayer;
	CALayer* _baseDimmingLayer;

}

@property (assign,nonatomic) BOOL shouldInnerPulse;                           //@synthesize shouldInnerPulse=_shouldInnerPulse - In the implementation block
@property (nonatomic,retain) UIImage * innerImageMask;                        //@synthesize innerImageMask=_innerImageMask - In the implementation block
@property (assign,nonatomic) BOOL rotateInnerImageToMatchCourse;              //@synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse - In the implementation block
+(float)baseDiameter;
+(float)innerDiameter;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)_setMapRotationRadians:(float)arg1 ;
-(void)_setMapType:(unsigned)arg1 ;
-(void)_setMapDisplayStyle:(int)arg1 ;
-(void)_setPresentationCourse:(double)arg1 ;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(id)_pulseLayer;
-(id)_pulseAnimation;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(UIImage*)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(id)_baseLayer;
-(void)_updateLayers;
-(void)_setupLayers;
-(void)_updateInnerMaskLayer;
-(void)setShouldInnerPulse:(BOOL)arg1 ;
-(void)_updateAccuracyColors;
-(id)_innerPulseAnimation;
-(void)_updatePulseAnimation;
-(void)_updateBaseImage;
-(void)_updatePulseColor;
-(id)_baseDimmingLayer;
-(CGColorRef)_accuracyFillColor;
-(void)_updateInnerCourseRotation;
-(void)setInnerImageMask:(UIImage*)arg1 ;
-(void)setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(BOOL)shouldInnerPulse;
-(id)innerImageMask;
-(BOOL)rotateInnerImageToMatchCourse;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)_dealloc;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end
