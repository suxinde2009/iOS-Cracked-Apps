//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseMapViewModel.h"

@class DGPRouteLineViewModel;

@interface DGPLineDetailMapViewModel : DGPBaseMapViewModel
{
    DGPRouteLineViewModel *_lineModel;
}

@property(retain, nonatomic) DGPRouteLineViewModel *lineModel; // @synthesize lineModel=_lineModel;
- (void).cxx_destruct;
- (void)dynamicStationAnnotations;
- (void)defaultStationAnnotations;
- (id)routeOverlayForCoordinateArray:(id)arg1 withPolyLineIndex:(long long)arg2;
- (long long)polyLineIndexWithSelectedIndex:(long long)arg1;
- (void)parseTrafficOverlay;
- (void)pinStationAnnotations;
- (id)addTrafficRouteOverlay:(id)arg1 withPolyLineIndexes:(id)arg2 withLLIndexes:(id)arg3;
- (void)parseDefaultTrafficOverlay;
- (void)parseStopsAnnotation;
- (void)parseMetroBusRoute;
- (void)parseLineModel;
- (void)updateModelWithSelectedStopIndex:(long long)arg1;
- (id)initWithLineModel:(id)arg1 withSelectedStopIndex:(long long)arg2;

@end

