//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMPCPolyPolygon;

@interface GMSx_GMPCExtrudedArea : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMPCPolyPolygon *component; // @dynamic component;
@property(nonatomic) _Bool hasComponent; // @dynamic hasComponent;
@property(nonatomic) _Bool hasMaxZ; // @dynamic hasMaxZ;
@property(nonatomic) _Bool hasMinZ; // @dynamic hasMinZ;
@property(nonatomic) int maxZ; // @dynamic maxZ;
@property(nonatomic) int minZ; // @dynamic minZ;

@end
