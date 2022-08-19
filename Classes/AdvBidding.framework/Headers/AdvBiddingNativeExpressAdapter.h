//
//  AdvBiddingNativeExpressAdapter.h
//  AdvanceSDK
//
//  Created by MS on 2022/8/8.
//

#import <Foundation/Foundation.h>
#import "AdvBidding.h"
#import "AdvanceNativeExpressDelegate.h"

NS_ASSUME_NONNULL_BEGIN
@interface AdvBiddingNativeExpressAdapter : AdvBaseAdPosition
@property (nonatomic, weak) id<AdvanceNativeExpressDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
