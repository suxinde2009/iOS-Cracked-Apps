//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONENetBaseModel.h"

@class NSArray<Optional><ONEDriverPointModel>, NSNumber<Optional>;

@interface ONEDriverLocModel : ONENetBaseModel
{
    NSNumber<Optional> *_dirverId;
    NSNumber<Optional> *_type;
    NSNumber<Optional> *_status;
    NSNumber<Optional> *_channel;
    NSArray<Optional><ONEDriverPointModel> *_coords;
}

@property(retain, nonatomic) NSArray<Optional><ONEDriverPointModel> *coords; // @synthesize coords=_coords;
@property(retain, nonatomic) NSNumber<Optional> *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSNumber<Optional> *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber<Optional> *dirverId; // @synthesize dirverId=_dirverId;
- (void).cxx_destruct;
- (id)initWithLocInfo:(id)arg1;

@end
