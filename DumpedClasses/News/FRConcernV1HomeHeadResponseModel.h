//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRConcernStructModel<Optional>, FRForumStructModel<Optional>, FRThreadListStructModel<Optional>, NSArray<FRConcernTabStructModel><Optional>, NSNumber, NSNumber<Optional>, NSString<Optional>;

@interface FRConcernV1HomeHeadResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
    FRConcernStructModel<Optional> *_concern_obj;
    NSNumber<Optional> *_show_et_status;
    NSString<Optional> *_post_content_hint;
    NSArray<FRConcernTabStructModel><Optional> *_tabs;
    FRThreadListStructModel<Optional> *_thread_list;
    FRForumStructModel<Optional> *_forum;
    NSNumber<Optional> *_show_describe;
    NSNumber<Optional> *_describe_max_line_number;
    NSString<Optional> *_concern_and_discuss_describe;
    NSNumber<Optional> *_hash_tag_type;
}

@property(retain, nonatomic) NSNumber<Optional> *hash_tag_type; // @synthesize hash_tag_type=_hash_tag_type;
@property(retain, nonatomic) NSString<Optional> *concern_and_discuss_describe; // @synthesize concern_and_discuss_describe=_concern_and_discuss_describe;
@property(retain, nonatomic) NSNumber<Optional> *describe_max_line_number; // @synthesize describe_max_line_number=_describe_max_line_number;
@property(retain, nonatomic) NSNumber<Optional> *show_describe; // @synthesize show_describe=_show_describe;
@property(retain, nonatomic) FRForumStructModel<Optional> *forum; // @synthesize forum=_forum;
@property(retain, nonatomic) FRThreadListStructModel<Optional> *thread_list; // @synthesize thread_list=_thread_list;
@property(retain, nonatomic) NSArray<FRConcernTabStructModel><Optional> *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSString<Optional> *post_content_hint; // @synthesize post_content_hint=_post_content_hint;
@property(retain, nonatomic) NSNumber<Optional> *show_et_status; // @synthesize show_et_status=_show_et_status;
@property(retain, nonatomic) FRConcernStructModel<Optional> *concern_obj; // @synthesize concern_obj=_concern_obj;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
