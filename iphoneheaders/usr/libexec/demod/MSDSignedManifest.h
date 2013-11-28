/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <demod/demod-Structs.h>
@class NSDictionary;

@interface MSDSignedManifest : NSObject {

	NSDictionary* _payload;

}

@property (getter=getManifest,readonly) NSDictionary * manifest; 
@property (getter=getInfo,readonly) NSDictionary * info; 
@property (retain) NSDictionary * payload;                                    //@synthesize payload=_payload - In the implementation block
+(id)signedManifestWithNSData:(id)arg1 ;
-(id)initWithNSData:(id)arg1 ;
-(BOOL)verifyManifestSignature:(id)arg1 ;
-(SecKeyRef)createPublicKeyForStrongSigning:(SecCertificateRef)arg1 ;
-(SecKeyRef)createPublicKeyForDevelopmentSigning:(SecCertificateRef)arg1 ;
-(BOOL)verifySignature:(id)arg1 forData:(id)arg2 withKey:(SecKeyRef)arg3 ;
-(SecKeyRef)createPublicKey:(SecCertificateRef)arg1 usingPolicy:(SecPolicyRef)arg2 ;
-(SecKeyRef)createPublicKeyForDevelopmentSigningStandard:(SecCertificateRef)arg1 ;
-(id)getManifest;
-(id)payload;
-(void)setPayload:(id)arg1 ;
-(id)getInfo;
-(void).cxx_destruct;
@end
