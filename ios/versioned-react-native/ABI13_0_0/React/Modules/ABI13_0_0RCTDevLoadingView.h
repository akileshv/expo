/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <ReactABI13_0_0/ABI13_0_0RCTBridgeModule.h>

@interface ABI13_0_0RCTDevLoadingView : NSObject <ABI13_0_0RCTBridgeModule>

+ (void)setEnabled:(BOOL)enabled;
- (void)updateProgress:(ABI13_0_0RCTLoadingProgress *)progress;

@end