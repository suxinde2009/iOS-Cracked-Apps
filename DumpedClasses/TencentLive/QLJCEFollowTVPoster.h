//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEPoster, QLJCEShareItem;

@interface QLJCEFollowTVPoster : JceObjectV2
{
    QLJCEPoster *jcev2_p_0_r_poster;
    NSString *jcev2_p_1_o_lid;
    NSString *jcev2_p_2_o_cid;
    NSString *jcev2_p_3_o_vid;
    NSString *jcev2_p_4_o_attentKey;
    QLJCEShareItem *jcev2_p_5_o_shareItem;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_5_o_shareItem; // @synthesize jcev2_p_5_o_shareItem;
@property(retain, nonatomic, getter=jce_attentKey, setter=setJce_attentKey:) NSString *jcev2_p_4_o_attentKey; // @synthesize jcev2_p_4_o_attentKey;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_3_o_vid; // @synthesize jcev2_p_3_o_vid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_2_o_cid; // @synthesize jcev2_p_2_o_cid;
@property(retain, nonatomic, getter=jce_lid, setter=setJce_lid:) NSString *jcev2_p_1_o_lid; // @synthesize jcev2_p_1_o_lid;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_0_r_poster; // @synthesize jcev2_p_0_r_poster;
- (void).cxx_destruct;
- (id)init;

@end
