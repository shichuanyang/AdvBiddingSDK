//
//  AdvBiddingCongfig.h
//  
//
//  Created by MS on 2022/7/27.
//

#import <Foundation/Foundation.h>
#import "AdvBidding.h"
@class AdvSupplierModel;
NS_ASSUME_NONNULL_BEGIN
@interface AdvBiddingCongfig : NSObject
+ (AdvBiddingCongfig *)defaultManager;

- (AdvSupplierModel *)returnSupplierByAdspotId:(NSString *)adspotId;
// 清空持有的adDataModel
- (void)deleteAdDataModel;
@end

NS_ASSUME_NONNULL_END
